#----Functions----#

# check ruby syntax in project folder recursively
checkrb() 
{
    for i in $(find . -name "*.rb"); do
        echo $i; 
        ruby -c $i;
    done
}


#move file and create directory
mvp()
{
    dir="$2" # Include a / at the end to indicate directory (not filename)
    tmp="$2"; tmp="${tmp: -1}"
    [ "$tmp" != "/" ] && dir="$(dirname "$2")"
    [ -a "$dir" ] ||
    mkdir -p "$dir" &&
    mv "$@"
}
#push to git using first arg as commit message
gpush()
{
    git add .
    git commit -m "$1"
    git push
}
addkeys()
{
    eval `ssh-agent`
    ssh-add ~/.ssh/labkey
}
#create quicknote from cli in obsidian vault
quicknote(){
    date=$(date '+%Y-%m-%d')
    newnote="/home/punchy/Documents/main-vault/main/${date} quick note.md"
    cp /home/punchy/Documents/main-vault/main/Templates/qn-template.md "$newnote"
    nvim +4 "$newnote" 
}

go()
{
    usage()
    {
        echo "Syntax: go [arg] hostname "
        echo "-u: alternate user"
        echo "-h: this help menu"
    }
    local OPTIND
    while getopts :hu:e: arg; do
      case "${arg}" in
        u)
            alt_user=${OPTARG}
            echo $alt_user
            ;;
        h)
            usage
            return 0
            ;;

      esac
    done
    server=${*: -1:1}
    if [[ -z "$server" || "$server" == *"/"* ]]; 
    then
        echo "No server specified"
        usage
    else
        if [ -n "$alt_user" ];
        then
            echo "Jump initiated to $server as $alt_user"
            ssh $alt_user@$server
        else
            echo "Jump initiated to $server as punchy"
            ssh punchy@$server
        fi
    fi    
}

tmx() {
    tmux new-session -d -s sess >/dev/null
    tmux new-window -t sess
    tmux rename-window -t sess:1 'second'
    tmux splitw -v -p 10 -t sess
    tmux splitw -h -p 80 -t sess
    tmux select-pane -t sess
    tmux splitw -h -p 5 -t sess
    tmux clock -t sess:1.1
    tmux a -t sess
}

