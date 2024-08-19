# qt
# https://mesonbuild.com/Qt6-module.html
qt6 = import('qt6')
qt6_dep = dependency('qt6', modules : ['Core', 'Widgets', 'Gui'], main : true) # main:true, 隐藏控制台

inc = include_directories('include')

uis = files(
    'ui/languagetest.ui',
)

headers = files(
    'include/languagetest.h',
)

#resources = files('lang.qrc')

src = files(
    'main.cpp',
    'src/languagetest.cpp',
)

ts = [
    'i18n/zh-CN.ts'
]

# 根据当前目录生成ts文件
run_command('lupdate', '.', '-ts', ts, check : true)

#windows = import('windows')
#rc = windows.compile_resources('logo.rc')

ui_files = qt6.compile_ui(sources : uis)

moc_files = qt6.compile_moc(headers : headers)

#resource_files = qt6.compile_resources(sources : resources)
#ts = files(
#    'i18n/zh-CN.ts'
#)
#ts_files = qt6.compile_translations(ts_files : ts, build_by_default : true) # 单独编译为qm，加载时需要加载指定加载路径

ts_files = qt6.compile_translations(qresource : 'lang.qrc') # 嵌入到软件中，软件可通过translator.load(":/i18n/zh-CN.qm")来加载

#src += rc
src += moc_files
src += ui_files
#src += resource_files
src += ts_files

executable('widget_template', src,
           include_directories : inc,
           dependencies : qt6_dep,
           win_subsystem : 'windows'
)
