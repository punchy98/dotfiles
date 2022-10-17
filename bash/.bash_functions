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

