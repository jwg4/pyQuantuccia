import setuptools

qu_ext = setuptools.Extension(
    'quantuccia',
    include_dirs=['src/Quantuccia'],
    sources=['src/pyQuantuccia.cpp']
)

setuptools.setup(
    name='pyQuantuccia',
    author='Jack Grahl',
    author_email='jack.grahl@gmail.com',
    version='0.1.0',
    packages=['pyQuantuccia'],
    setup_requires=['pytest-runner'],
    tests_require=['pytest'],
    test_suite='tests',
    ext_modules=[qu_ext]
)
