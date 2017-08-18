#ifndef GLWidget_H
#define GLWidget_H

#include <QGLWidget>
#include <QGLShaderProgram>
#include <QGLBuffer>
#include <QtGui>

class GLWidget : public QGLWidget
{
    Q_OBJECT

public:
GLWidget(QWidget *parent = 0);
~GLWidget();
QSize sizeHint() const;

protected:

    void initializeGL();
    void resizeGL (int width, int height);
    void paintGL();
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void wheelEvent(QWheelEvent *event);
    //void keyPressEvent(QKeyEvent *event);
    //void keyReleaseEvent(QKeyEvent *);

private:
    //! [1]
    QMatrix4x4 pMatrix;
    QGLShaderProgram lightingShaderProgram;
    //! [2]
    int numCubeVertices;
    QGLBuffer cubeBuffer;

    QVector<QVector3D> colors;

    //! [2]
    GLuint cubeTexture;
    QGLShaderProgram coloringShaderProgram;
    //! [3]
    int numSpotlightVertices;
    QGLBuffer spotlightBuffer;
    //! [3]
    double lightAngle;
    double alpha;
    double beta;
    double distance;
    QPoint lastMousePosition;

    int frames;

private slots:
    void timeout();


};

#endif // GLWidget_H
