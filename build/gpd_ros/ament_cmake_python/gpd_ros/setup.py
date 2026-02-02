from setuptools import find_packages
from setuptools import setup

setup(
    name='gpd_ros',
    version='0.0.1',
    packages=find_packages(
        include=('gpd_ros', 'gpd_ros.*')),
)
