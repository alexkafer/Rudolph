#ifndef CELLRENDERER_H
#define CELLRENDERER_H

#include <QAbstractTableModel>
#include <QString>


const int COLS= 86400;
const int ROWS= 1024;
const int timeInterval = 25;
extern int gridData[ROWS][COLS];



class CellRenderer : public QAbstractTableModel
{
    Q_OBJECT
public:
    CellRenderer(QObject *parent);
    int rowCount(const QModelIndex &parent = QModelIndex()) const override;
    int columnCount(const QModelIndex &parent = QModelIndex()) const override;
    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;
    QVariant headerData(int section, const Qt::Orientation orientation, int role = Qt::DisplayRole) const override;

public slots:
    void editData(const QModelIndex & index);
    void editDataSpace(const QModelIndexList & index);
    //void save();
};


#endif // CELLRENDERER_H
