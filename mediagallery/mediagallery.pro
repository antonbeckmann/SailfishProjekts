# The name of your app
TARGET = mediagallery

# Use libsailfishapp
CONFIG += sailfishapp

# C++ sources
SOURCES += src/mediagallery.cpp

# C++ headers
HEADERS +=

# The .desktop file
desktop.files = mediagallery.desktop

OTHER_FILES += \
    qml/cover/CoverPage.qml \
    qml/model/GalleryModel.qml \
    qml/model/qmldir \
    qml/pages/PreviewGrid.qml \
    qml/pages/ImagePage.qml \
    qml/mediagallery.qml \
    rpm/mediagallery.spec \
    rpm/mediagallery.yaml \
    mediagallery.desktop
