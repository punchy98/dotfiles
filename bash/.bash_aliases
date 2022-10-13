#----Aliases----"
alias ports='netstat -tulanp'
#set cat to bat with cat-like paging
if hash bat 2>/dev/null; then
    alias cat="bat --paging never"
elif hash batcat 2>/dev/null; then
    alias cat="batcat --paging never"
fi

#if vimx is not installed set vim to default editor and set editor aliases
if hash nvim 2>/dev/null; then
    export EDITOR="nvim"
    export SUDO_EDITOR="nvim"
    export GIT_EDITOR="nvim"
    alias suvim="sudo -E nvim"
    alias vim="nvim"
    alias vi="nvim"
elif hash vimx 2>/dev/null; then  
    export EDITOR="vimx"
    export SUDO_EDITOR="vimx"
    export GIT_EDITOR="vimx"
    alias suvim="sudo -E vimx"
    alias vim="vimx --noplugin"
    alias vi="vimx --noplugin"
elif hash vim 2>/dev/null; then  
    export EDITOR="vim --noplugin"
    alias vi="vim --noplugin"
fi

alias ls="exa"
alias l="exa"
