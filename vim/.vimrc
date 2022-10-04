" ---- Set options ---- "
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
set shiftwidth=4 
set tabstop=4
set softtabstop=4
set expandtab 
set autoindent 
set smartindent
set path=.,**

" ---- Set filetype detection and syntax highlighting ----"
filetype plugin indent on
syntax on

" ---- Set env variables ---- "
let $RTP=split(&runtimepath,',')[0] 
let $RC="$HOME/.vimrc" 





" ---- REMAPS ---- "

"move current line up 1 - normal mode
nnoremap <C-j> :m .+1<CR>==             
"move current line down 1 - normal mode
nnoremap <C-k> :m .-2<CR>==        
"move current line up 1 - insert mode
inoremap <C-j> <Esc>:m .+1<CR>==gi
"move current line down 1 - insert mode
inoremap <C-k> <Esc>:m .-2<CR>==gi
"move current line up 1 - visual mode
vnoremap <C-j> :m '>+1<CR>gv=gv
"move current line down 1 - visual mode
vnoremap <C-k> :m '<-2<CR>gv=gv
"create newline above without exiting normal mode
nnoremap <S-Up> moO<Esc>`o
"create newline below without exiting normal mode
nnoremap <S-Down> moo<Esc>`o
