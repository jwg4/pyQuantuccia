import setuptools

qu_ext = setuptools.Extension(
    'quantuccia',
    libraries=['ql'],
    library_dirs=['src/Quantuccia'],
    sources=['src/pyQuantuccia.cpp']
)

setuptools.setup(
    name='pyQuantuccia',
    version='0.1.0',
    packages=['pyQuantuccia'],
    ext_modules=[qu_ext]
)
