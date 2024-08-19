
qt6_dep = dependency('qt6', modules : ['Core', 'Gui', 'Qml', 'Quick'], main : true) # main:true, 隐藏控制台

src = files(
    'main.cpp',
)
#src += qt6.preprocess(qresources : ['resources.qrc'])
executable('quick_template', src,
           dependencies : qt6_dep,
           win_subsystem : 'windows'
)
