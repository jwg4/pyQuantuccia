import platform
import setuptools

if platform.system() == 'Windows':
    extra_dirs = [
        "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.10240.0\\ucrt" # noqa
    ]
else:
    extra_dirs = []

qu_ext = setuptools.Extension(
    'quantuccia',
    include_dirs=['src/Quantuccia'] + extra_dirs,
    sources=['src/pyQuantuccia.cpp'],
    headers=[]
)

setuptools.setup(
    name='pyQuantuccia',
    author='Jack Grahl',
    author_email='jack.grahl@gmail.com',
    version='0.2.0',
    packages=['pyQuantuccia'],
    package_dir={'': 'src'},
    setup_requires=['pytest-runner'],
    tests_require=['pytest'],
    test_suite='tests',
    ext_modules=[qu_ext]
)
