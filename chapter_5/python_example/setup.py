from distutils.core import setup, Extension

setup(name='pvnrt', version='1.0', ext_modules=[Extension('pvnrt', ['_pvnrt.c', 'ideal.c'])])
