from setuptools import find_packages
from setuptools import setup

setup(
    name='roomie_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('roomie_msgs', 'roomie_msgs.*')),
)
