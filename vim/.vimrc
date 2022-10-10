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
set wildmenu

" ---- vim plug ---- "  
call plug#begin()
Plug 'airblade/vim-gitgutter'
Plug 'gruvbox-community/gruvbox'
call plug#end()
" ---- Set filetype detection and syntax highlighting ---- "
filetype plugin indent on
syntax on



" ---- Set colorscheme ---- "
colorscheme slate

" ---- set netrw configs ----"
let g:netrw_banner=0        " disable annoying banner
let g:netrw_altv=1          " open splits to the right
let g:netrw_liststyle=3     " tree view



" ---- Set env variables ---- "
let $RTP=split(&runtimepath,',')[0] 
let $vrc="$HOME/.vimrc" 
let $i3="$HOME/.config/i3/config"
let $brc="$HOME/.bashrc"

" ---- set leader ----"
let mapleader = " "
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
nnoremap <S-Up> moO<Esc>
"create newline below without exiting normal mode
nnoremap <S-Down> moo<Esc>
"beginning of line
nnoremap H ^
"end of line
nnoremap L $
"quicker escape
inoremap jj <ESC>
"open filetree and resize
nnoremap <leader>pv :wincmd v<bar> :Ex <bar> :vertical resize 20<CR>
"split vim vertically
nnoremap <leader>vs :wincmd v <CR>
"split vim horizontally
nnoremap <leader>hs :wincmd s <CR>
"save ez mode
nnoremap <leader>ss :w<CR>


"if vim was compiled wiht clipboard support (i.e. vimx)
if has('clipboard_working')
    "set vimpaste keybind
    nnoremap <leader>p "+p 
    "set vimpaste keybind
    nnoremap <leader>P "+P 
endif
if has('nvim')
    "nvim only remaps here
    " ---- Set colorscheme ---- "
    colorscheme gruvbox
endif


