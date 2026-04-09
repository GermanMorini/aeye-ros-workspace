from glob import glob
import os

from setuptools import find_packages, setup


package_name = "utilities"


setup(
    name=package_name,
    version="0.0.1",
    packages=find_packages(exclude=["test"]),
    data_files=[
        (
            "share/ament_index/resource_index/packages",
            ["resource/" + package_name],
        ),
        ("share/" + package_name, ["package.xml"]),
        (os.path.join("share", package_name, "config"), glob("config/*")),
    ],
    install_requires=["setuptools"],
    zip_safe=True,
    maintainer="TODO",
    maintainer_email="todo@example.com",
    description="Utility ROS 2 nodes for process execution and system helpers.",
    license="MIT",
    tests_require=["pytest"],
    entry_points={
        "console_scripts": [
            "process_executor = utilities.process_executor:main",
        ],
    },
)
