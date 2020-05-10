# git安装、配置与初步使用  

> 参考[廖雪峰的官方网站](https://www.liaoxuefeng.com/wiki/896043488029600)
--------------
## git 原理  
> 参考[菜鸟教程](https://www.runoob.com/git/git-tutorial.html)  

-----------  

git是一种采用了分布式版本库的版本控制工具，
## windows10 下git安装与配置  

### 下载安装  
[git官网](https://git-scm.com/download/win)  

### 配置  
Git 提供了一个叫做 git config 的工具，专门用来配置或读取相应的工作环境变量。
这些环境变量，决定了 Git 在各个环节的具体工作方式和行为。这些变量可以存放在以下三个不同的地方：
* /etc/gitconfig 文件：系统中对所有用户都普遍适用的配置。若使用 git config 时用 --system 选项，读写的就是这个文件。
* ~/.gitconfig 文件：用户目录下的配置文件只适用于该用户。若使用 git config 时用 --global 选项，读写的就是这个文件。
* 当前项目的 Git 目录中的配置文件（也就是工作目录中的 .git/config 文件）：这里的配置仅仅针对当前项目有效。每一个级别的配置都会覆盖上层的相同配置，所以 .git/config 里的配置会覆盖 /etc/gitconfig 中的同名变量。

#### 初始配置  
1. 配置个人用户名称和电子邮件。
```git
$ git config --global user.name "username"
$ git config --global user.email email
```
2. 配置默认文本编辑器，一般在安装时已经选择

```git
//配置vim为默认编辑器
$ git config --global core.editor vim
```
3. 查看配置信息
```git
$ git config --list
```

#### 开始配置  
1. 创建版本库（仓库）。选择一个空的目录，并且不含中文。
2. 初始化，将该目录交于git管理，作为一个版本库。
```git
$ git init
```
