project('synapse', 'cpp', license : 'boost')

boost_headers = subproject('boost').get_variable('headers')

includes = include_directories('include')

if get_option('synapse_threads')
	defines = [ ]
else
	defines = [ '-DBOOST_SYNAPSE_DISABLE_THREADS' ]
endif

emit = declare_dependency( include_directories: includes, compile_args: defines )

connect = declare_dependency( include_directories: includes, compile_args: defines, sources:
	'src/connect.cpp',
	dependencies: [
		boost_headers ] )

block = declare_dependency( include_directories: includes, compile_args: defines, sources:
	'src/block.cpp',
	dependencies: [
		boost_headers ] )

thread_local_queue = declare_dependency( include_directories: includes, compile_args: defines, sources:
	'src/thread_local_queue.cpp',
	dependencies: [
		boost_headers ] )

all = declare_dependency( include_directories: includes,
	link_with: static_library(
		'synapse',
		dependencies: [
			connect,
			block,
			thread_local_queue ] ) )