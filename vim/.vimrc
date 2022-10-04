set number
set nohlsearch
set noerrorbells
set incsearch
set scrolloff=8
set signcolumn=yes
set exrc
set relativenumber
set hidden
set noswapfile
set nobackup
set undodir=~/.vim/undodir
set undofile
set backspace=start,eol,indent
filetype plugin indent on
syntax on
let $RTP=split(&runtimepath,',')[0] 
let $RC="$HOME/.vimrc"
set shiftwidth=4 
set tabstop=4
set softtabstop=4
set expandtab 
set autoindent 
set smartindent
set path=.,**
nnoremap <C-j> :m .+1<CR>==
nnoremap <C-k> :m .-2<CR>==
inoremap <C-j> <Esc>:m .+1<CR>==gi
inoremap <C-k> <Esc>:m .-2<CR>==gi
vnoremap <C-j> :m '>+1<CR>gv=gv
vnoremap <C-k> :m '<-2<CR>gv=gv
