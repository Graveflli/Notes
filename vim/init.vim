set number
syntax on
set showmode
set mouse=a
set t_Co=256
filetype indent on
set autoindent
set tabstop=4
" set expandtab
set showmatch
set incsearch
set ignorecase

" autocmd vimenter * NERDTree

" using Vundle
set nocompatible               " be improved, required
filetype off                   " required
" set the runtime path to include Vundle and initialize
set rtp+=~/.config/nvim/bundle/Vundle.vim
call vundle#begin()            " required
Plugin 'VundleVim/Vundle.vim'  " required

" my plugins here
Plugin 'scrooloose/nerdtree'
Plugin 'valloric/YouCompleteMe'
Plugin 'ctrlpvim/ctrlp.vim'

Plugin 'https://github.com/Shougo/junkfile.vim'
" Plugin 'dracula/vim'

" The following are examples of different formats supported.
" Keep Plugin commands between vundle#begin/end.
" plugin on GitHub repo
Plugin 'tpope/vim-fugitive'
" plugin from http://vim-scripts.org/vim/scripts.html
" Plugin 'L9'
" Git plugin not hosted on GitHub
Plugin 'git://git.wincent.com/command-t.git'
" git repos on your local machine (i.e. when working on your own plugin)
"Plugin 'file:///home/gmarik/path/to/plugin'
" The sparkup vim script is in a subdirectory of this repo called vim.
" Pass the path to set the runtimepath properly.
Plugin 'rstacruz/sparkup', {'rtp': 'vim/'}
" Install L9 and avoid a Naming conflict if you've already installed a
" different version somewhere else.
" Plugin 'ascenator/L9', {'name': 'newL9'}

" end of plugins
call vundle#end()               " required
filetype plugin indent on       " required
