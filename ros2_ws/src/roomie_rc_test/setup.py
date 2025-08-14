from setuptools import find_packages, setup

package_name = 'roomie_rc_test'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        ('share/' + package_name + '/launch', ['launch/test_servers.launch.py']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='phj',
    maintainer_email='damuya07@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'rms_server = roomie_rc_test.rms_server:main',
            'rgui_server = roomie_rc_test.rgui_server:main',
            'vs_server = roomie_rc_test.vs_server:main',
            'ioc_server = roomie_rc_test.ioc_server:main',
            'arm_server = roomie_rc_test.arm_server:main',
        ],
    },
)
