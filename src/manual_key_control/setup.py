from setuptools import find_packages, setup

package_name = 'manual_key_control'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='anmol',
    maintainer_email='anmol@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'draw_square=manual_key_control.draw_Square:main',
            'key_pub=manual_key_control.key_pub:main',
            'key_trigger=manual_key_control.key_trigger:main',
            'key_server=manual_key_control.key_server:main',
        ],
    },
)
