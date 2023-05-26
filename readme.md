# G4-IAEA-PhaseSpace

## ⭐ About this project
This project includes 2 examples about IAEA routine.
* G4IAEApsf-Reader
* G4IAEApsf-Writer

## 🔧 Requirements
* Geant4.10.07

#### a) Pre-Packages installation
- Mở của số Terminal và nhập lệnh sau để cập nhật Ubuntu
    ```c++
    $ sudo apt-get update && sudo apt-get upgrade
    ```
![](./image/image1.png)

- Cài đặt các gói pre-package cho Geant4
    ```c++
    $ sudo apt-get install build-essential apt-file gcc g++ autoconf automake automake1.11 tcl8.6-dev tk8.6-dev libglu1-mesa-dev libgl1-mesa-dev libxt-dev libxmu-dev libglew-dev libglw1-mesa-dev gfortran inventor-dev libxaw7-dev freeglut3-dev libxerces-c-dev libxmltok1-dev qt5-default libxi-dev libclutter-gtk-1.0-0 cmake libxmlrpc-core-c3-dev tclxml tclxml-dev libexpat1-dev libgtk2.0-dev libxpm-dev x11proto-gl-dev x11proto-input-dev -y
    sudo apt-get install dpkg-dev cmake g++ gcc binutils libx11-dev libxpm-dev libxft-dev libxext-dev python libssl-dev gfortran libpcre3-dev xlibmesa-glu-dev libglew1.5-dev libftgl-dev libmysqlclient-dev libfftw3-dev libcfitsio-dev graphviz-dev libavahi-compat-libdnssd-dev libldap2-dev python-dev libxml2-dev libkrb5-dev libgsl0-dev qtwebengine5-dev
    ```

#### b) Geant4 installation
- Tạo thư mục Geant4 bên trong Softwares
- Tạo hai thư mục mới build và install trong thư mục Geant4, sao chép thư mục source và data vào Geant4.

![](Images/image3.png)

- Mở Terminal trong thư mục build và nhập các lệnh sau
    ```c++
    $ cmake -DGEANT4_INSTALL_DATADIR=../data \
    -DGEANT4_USE_GDML=ON \
    -DGEANT4_USE_HDF5=OFF \
    -DGEANT4_USE_OPENGL_X11=ON \
    -DGEANT4_USE_QT=ON \
    -DGEANT4_BUILD_MULTITHREADED=ON \ 
    -DCMAKE_INSTALL_PREFIX=../install \
    ../source
    $ make -j4
    $ sudo make install
    ```
#### c) Environment variables
- Thêm biến môi trường Geant4 bằng cách sao chép 2 dòng sau vào trong tệp tin g4env.sh
    ```c++
    source "/home/Softwares/Geant4/install/bin/geant4.sh"

    source "/home/Softwares/Geant4/install/share/Geant4-10.6.3/geant4make/geant4make.sh"
    ```

## 🚀 About Me
**Bùi Tiến Hưng**

Master of Science in Nuclear Engineering field.

Nuclear Engineering Lab, Hanoi University of Science and Technology (HUST).

Department of Planning and R&D Management, Vietnam Atomic Energy Institute (VINATOM).

**Interestet Fields**

Medical physics, Monte-Carlo simulation, Machine learning.
 
buitienhung@vinatom.gov.vn
hungbt1908@gmail.com

Vietnam Atomic Energy Institute, No 59 Ly Thuong Kiet stree, Hoan Kiem district, Hanoi, Vietnam. 