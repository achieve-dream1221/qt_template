# 基于meson + Qt6的基础工程模板

# 如何使用

```shell
git clone https://github.com/achieve-dream1221/qt_meson_project_template your_project_name # 下载仓库到本地your_project_name文件夹
cd your_project_name # 进入文件夹
```

## 修改meson配置

1. 在meson.build文件中, 开头的project名称需要修改为项目名
2. 向ts列表中需要添加的翻译文件名称, 会创建于i18n目录下, **ts文件可用qt自带的语言家linguist.exe进行翻译编辑**
3. 修改language.qrc里面的翻译文件名称, 跟ts里面的名称一致,但是后缀需改为qm
4. executable里面修改编译的可执行文件名称, 默认为main
5. 如果需要隐藏控制台debug信息, 可取消executable里面的win_subsystem注释
6. 如果有新增加的*.ui,*.cpp,*h(**仅需添加带有Q_OBJECT**)文件,请添加到对应的uis, moc_headers, src中
7. 如果需要设置软件图标,请提供ico文件到resources目录下,并修改logo.rc里面对应的图标名称

## 编译运行测试

```shell
meson setup buildDir
meson compile update_ts -C buildDir # 首次运行,生成空的翻译文件才能正常编译exe
meson compile your_exe_name -j 14 -C buildDir
meson compile update_ts -C buildDir # 读取编译的文件中需要翻译的字符串,重新生成翻译文件
```

## enjoy it!