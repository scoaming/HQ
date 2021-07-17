" .vimrc - Vim configuration file.
"
" Copyright (c) 2010 Jeffy Du. All Rights Reserved.
"
" Maintainer: Jeffy Du <jeffy.du@gmail.com>
"    Created: 2010-01-01
" LastChange: 2010-04-22


" GENERAL SETTINGS: {{{1
" To use VIM settings, out of VI compatible mode.
set nocompatible
" Enable file type detection.
filetype plugin indent on
" Syntax highlighting.
syntax on
syntax enable
" Setting colorscheme
" Other settings.
set   autoindent 
set   cindent
set   autoread
set   autowrite
set   background=dark
set   backspace=indent,eol,start
set   nobackup
"set   cinoptions=:0
set   cursorline
set   completeopt=longest,menuone
set   noexpandtab
set   fileformat=unix
if version >= 603
	set helplang=cn
	set encoding=utf-8
endif

set   foldmethod=marker
set   history=500
set   hlsearch
set   ignorecase
set   incsearch
set   mouse=a
set   number
set   pumheight=10
set   ruler
set   scrolloff=3
set   shiftwidth=4
set   showcmd
set   smartindent
set   smartcase
set   smarttab
set   tabstop=4
set   iskeyword+=_,$,@,%,#,-
set   novisualbell
set   statusline=%F%m%r%h%w\ [FORMAT=%{&ff}]\ [TYPE=%Y]\ [POS=%l,%v][%p%%]\ %{strftime(\"%d/%m/%y\ -\ %H:%M\")}
set   laststatus=2
set   magic                   " 设置魔术
set   guioptions-=T           " 隐藏工具栏
set   guioptions-=m           " 隐藏菜单栏


"Set File Title: {{{1
autocmd BufNewFile *.cpp,*.[ch],*.sh,*.py,*.java exec ":call SetTitle()"
func SetTitle()
	if &filetype == 'sh'
		call setline(1,"\#!/bin/bash")
		call append(line("."),"\#############################################################")
		call append(line(".")+1,"\# File Name: ".expand("%"))
		call append(line(".")+2,"\# Creator  : zhouhao")
		call append(line(".")+3,"\# QQ       : ")
		call append(line(".")+4,"\# Email    : ")
		call append(line(".")+5,"\# CTime    : ".strftime("%c"))
		call append(line(".")+6," #############################################################/")
		call append(line(".")+7,"")

	elseif &filetype == 'python'
		call setline(1,"\#!/usr/bin/env python")
		call append(line("."),"\#############################################################")
		call append(line(".")+1,"\# File Name: ".expand("%"))
		call append(line(".")+2,"\# Creator  : zhouhao")
		call append(line(".")+3,"\# QQ       : ")
		call append(line(".")+4,"\# Email    : ")
		call append(line(".")+5,"\# CTime    : ".strftime("%c"))
		call append(line(".")+6,"\#############################################################")
		call append(line(".")+7,"")

	else 
		call setline(1, "/**************************************************************")
		call append(line("."), " * File Name: ".expand("%"))
		call append(line(".")+1, " * User 	: zhouhao")
		call append(line(".")+2, " * QQ       : ")
		call append(line(".")+3, " * Email    : ")
		call append(line(".")+4, " * CTime    : ".strftime("%c"))
		call append(line(".")+5, "***************************************************************/")
	endif

	if expand("%:e") == 'h'
		call append(line(".")+6, "#ifndef _".toupper(expand("%:t:r"))."_H")
		call append(line(".")+7, "#define _".toupper(expand("%:t:r"))."_H")
		call append(line(".")+8, "")
		call append(line(".")+9, "")
		call append(line(".")+10, "#endif")

	elseif &filetype == 'cpp'
		call append(line(".")+6, "#include <iostream>")
		call append(line(".")+7, "using namespace std;")
		call append(line(".")+8, "")
		call append(line(".")+9, "int main(int argc, char *argv[])")
		call append(line(".")+10, "{")
		call append(line(".")+11, "")
		call append(line(".")+12, "}")

	elseif &filetype == 'c'
		call append(line(".")+6, "#include <stdio.h>")
		call append(line(".")+7, "#include <string.h>")
		call append(line(".")+8, "#include <stdlib.h>")
		call append(line(".")+9, "")
		call append(line(".")+10, "int main(int argc, char *argv[])")
		call append(line(".")+11, "{")
		call append(line(".")+12, "")
		call append(line(".")+13, "}")
	endif
endfunc

"Keyboard COMMANDS: {{{1
nmap  <F2> gg=G
nmap  <F3> :TlistToggle<cr>
"nmap  <F6> :NERDTreeToggle<cr>
nmap  <F4> :MRU<cr>
"nmap  <F5> <Plug>LookupFile<cr>
"nmap  <F9> :call RunShell("Generate tags", "ctags -R --c++-kinds=+p --fields=+iaS --extra=+q .")<cr>
"nmap <F10> :call HLUDSync()<cr>
"nmap <F11> :call RunShell("Generate filename tags", "~/.vim/shell/genfiletags.sh")<cr>
"nmap <F12> :call RunShell("Generate cscope", "cscope -Rb")<cr>:cs add cscope.out<cr>

"Parentheses are automatically completed：
if &term=="xterm"
	set   t_Co=8
	set t_Sb=^[[4%dm
	set t_Sf=^[[3%dm
endif

let g:neocomplcache_enable_at_startup = 1

:inoremap ( ()<ESC>i
:inoremap ) <c-r>=ClosePair(')')<CR>
":inoremap { {<CR>}<ESC>O
:inoremap { {}<ESC>i
:inoremap } <c-r>=ClosePair('}')<CR>
:inoremap [ []<ESC>i
:inoremap ] <c-r>=ClosePair(']')<CR>
:inoremap " ""<ESC>i
:inoremap ' ''<ESC>i

function! ClosePair(char)
	if getline('.')[col('.')] - 1== a:char
		return "\<Right>"
	else
		return a:char
	endif
endfunction

map <F6> :call CompileRunGcc()<CR>
func! CompileRunGcc()
	exec "w"
	if &filetype == 'c'
		exec "!gcc % -o %<"
		exec "! ./%<"
	elseif &filetype == 'cpp'
		exec "!g++ % -o %<"
		exec "! ./%<"
	elseif &filetype == 'java' 
		exec "!javac %" 
		exec "!java %<"
	elseif &filetype == 'sh'
		:!./%
	endif
endfunc

" AUTO COMMANDS: {{{1
"auto expand tab to blanks
"autocmd FileType c,cpp set expandtab
autocmd FileType c,cpp map <buffer> <leader><space> :w<cr>:make<cr>
" Restore the last quit position when open file.
autocmd BufReadPost *
			\ if line("'\"") > 0 && line("'\"") <= line("$") |
			\     exe "normal g'\"" |
			\ endif

" SHORTCUT SETTINGS: {{{1
" Set mapleader
let mapleader=","
" Space to command mode.
nnoremap <space> :
vnoremap <space> :
" Switching between buffers.
nnoremap <C-h> <C-W>h
nnoremap <C-j> <C-W>j
nnoremap <C-k> <C-W>k
nnoremap <C-l> <C-W>l
inoremap <C-h> <Esc><C-W>h
inoremap <C-j> <Esc><C-W>j
inoremap <C-k> <Esc><C-W>k
inoremap <C-l> <Esc><C-W>l
" "cd" to change to open directory.
let OpenDir=system("pwd")
nmap <silent> <leader>cd :exe 'cd ' . OpenDir<cr>:pwd<cr>

" PLUGIN SETTINGS: {{{1
" taglist.vim
let g:Tlist_Auto_Update=1
let g:Tlist_Process_File_Always=1
let g:Tlist_Exit_OnlyWindow=1
let g:Tlist_Show_One_File=1
let g:Tlist_WinWidth=25
let g:Tlist_Enable_Fold_Column=0
let g:Tlist_Auto_Highlight_Tag=1
" NERDTree.vim
let g:NERDTreeWinPos="right"
let g:NERDTreeWinSize=25
let g:NERDTreeShowLineNumbers=1
let g:NERDTreeQuitOnOpen=1
" cscope.vim
if has("cscope")
	set csto=1
	set cst
	set nocsverb
	if filereadable("cscope.out")
		cs add cscope.out
	endif
	set csverb
endif
" OmniCppComplete.vim
set nocp 
filetype on
filetype plugin on 
let g:OmniCpp_DefaultNamespaces=["std"]
let g:OmniCpp_MayCompleteScope=1
let g:OmniCpp_SelectFirstItem=2

" VimGDB.vim
if has("gdb")
	set asm=0
	let g:vimgdb_debug_file=""
	run macros/gdb_mappings.vim
endif
" LookupFile setting
let g:LookupFile_TagExpr='"./tags.filename"'
let g:LookupFile_MinPatLength=2
let g:LookupFile_PreserveLastPattern=0
let g:LookupFile_PreservePatternHistory=1
let g:LookupFile_AlwaysAcceptFirst=1
let g:LookupFile_AllowNewFiles=0
" Man.vim
source $VIMRUNTIME/ftplugin/man.vim
" snipMate
let g:snips_author="Du Jianfeng"
let g:snips_email="cmdxiaoha@163.com"
let g:snips_copyright="SicMicro, Inc"
" plugin shortcuts
function! RunShell(Msg, Shell)
	echo a:Msg . '...'
	call system(a:Shell)
	echon 'done'
endfunction
nmap <leader>sa :cs add cscope.out<cr>
nmap <leader>ss :cs find s <C-R>=expand("<cword>")<cr><cr>
nmap <leader>sg :cs find g <C-R>=expand("<cword>")<cr><cr>
nmap <leader>sc :cs find c <C-R>=expand("<cword>")<cr><cr>
nmap <leader>st :cs find t <C-R>=expand("<cword>")<cr><cr>
nmap <leader>se :cs find e <C-R>=expand("<cword>")<cr><cr>
nmap <leader>sf :cs find f <C-R>=expand("<cfile>")<cr><cr>
nmap <leader>si :cs find i <C-R>=expand("<cfile>")<cr><cr>
nmap <leader>sd :cs find d <C-R>=expand("<cword>")<cr><cr>
nmap <leader>zz <C-w>o
nmap <leader>gs :GetScripts<cr>

let Tlist_Show_One_File=0
set noswapfile
set tags+=/usr/include/tags
set tags+=./tags
map ta :!ctags -R --c++-kinds=+p --fields=+iaS --extra=+q .<CR>
