#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QListWidgetItem>
#include <QIcon>
#include <QMetaType> // 包含Q_DECLARE_METATYPE宏所需的头文件
#include <QFileDialog>
namespace Ui {
class widget;
}

struct ItemInfo{//节点信息
    QString name;//节点名称
    QSize size;//节点大小
    QIcon icon;//节点图标
    ItemInfo(const QString &n = QString(), const QSize &s = QSize(), const QIcon &i = QIcon())
        : name(n), size(s), icon(i)
    {}
};
// 在结构体定义之后添加Q_DECLARE_METATYPE宏声明
Q_DECLARE_METATYPE(ItemInfo)

class widget : public QWidget
{
    Q_OBJECT

public:
    explicit widget(QWidget *parent = nullptr);
    ~widget();

private slots:
    void on_btn_Add_clicked();

    void on_btn_Choose_clicked();

    void on_listWidget_itemClicked(QListWidgetItem *item);

private:
    Ui::widget *ui;
    QIcon m_currentIcon;
};

#endif // WIDGET_H
