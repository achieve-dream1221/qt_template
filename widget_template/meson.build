# 如果是项目, 取消下面的注释, 修改项目名称
#project('qt_template', 'cpp',
#        default_options : ['warning_level=3', 'cpp_std=c++20'],
#        version : '0.1.0')

# 使用方式
# meson setup buildDir # 初始化meson项目
# meson compile update_ts -C buildDir # 首次运行,生成空的翻译文件才能正常编译exe
# meson compile your_exe_name -j 14 -C buildDir
# meson compile update_ts -C buildDir # 读取编译的文件中需要翻译的字符串,重新生成翻译文件


qt6 = import('qt6')
qt6_dep = dependency('qt6', modules : ['Core', 'Widgets', 'Gui'], main : true)

inc = include_directories('include')

src = files(
    'main.cpp',
    'src/mainwindow.cpp',
)
# *.ui文件编译
uis = files(
    'ui/mainwindow.ui',
)
# 依赖qt的头文件: Q_OBJECT
moc_headers = files(
    'include/mainwindow.h',
)
# 需要编译的qrc文件
resources = files('resources.qrc')

# 翻译文件
ts = ['en_US.ts']


if uis.length() > 0
    src += qt6.compile_ui(sources : uis)
endif


if moc_headers.length() > 0
    src += qt6.compile_moc(headers : moc_headers)
endif


if resources.length() > 0
    src += qt6.compile_resources(sources : resources)
endif

# 软件logo文件
windows = import('windows')
src += windows.compile_resources('logo.rc')

# 翻译文件
lupdate = find_program('lupdate', required : false)
if lupdate.found() == false
    error('lupdate not found')
else
    message('lupdate found')
    output = []
    foreach t : ts
        output += meson.current_source_dir() / 'i18n' / t
    endforeach
    custom_target('update_ts',
                  command : [lupdate, '.', '-ts', output],
                  output : ts,
                  build_by_default : true
    )
    if output.length() > 0
        src += qt6.compile_translations(qresource : 'language.qrc') # 注意检查language.qrc是否包含需要编译的ts文件
    endif
endif

executable('main', src,
           include_directories : inc,
           dependencies : qt6_dep,
           # win_subsystem : 'windows'， 用于隐藏控制台debug信息
)
