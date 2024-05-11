#include "widget.h"
#include "ui_widget.h"

widget::widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::widget)
{
    ui->setupUi(this);
}

widget::~widget()
{
    delete ui;
}

void widget::on_btn_Add_clicked()
{
    // 获取用户输入的节点信息
    QString name = ui->lEdit_Name->text();
    int width = ui->lEdit_Width->text().toInt();
    int height = ui->lEdit_Height->text().toInt();

    // 创建节点信息结构体
    ItemInfo info(name, QSize(width, height), m_currentIcon);

    // 创建包含节点信息的 QListWidgetItem
    QListWidgetItem *item = new QListWidgetItem(info.icon, info.name);
    // 将 QListWidgetItem 添加到 QListWidget 中
    ui->listWidget->addItem(item);

    // 存储节点信息与 QListWidgetItem 的关联，可使用 QListWidgetItem 的 data() 方法存储
    QVariant variant;
    variant.setValue(info);
    item->setData(Qt::UserRole, variant); // 将节点信息存储到 QListWidgetItem 的 data 中
}

void widget::on_btn_Choose_clicked()
{
    // 选择节点图标文件
    QString fileName = QFileDialog::getOpenFileName(this, "Choose Icon"
                            , "D:/Repositories/PaperlessConferencePCSystem/src/Resources", "Icons (*.jpg;*.png)");

    if (!fileName.isEmpty()) {
        // 添加选择的图标文件到当前图标
        m_currentIcon.addFile(fileName);
        ui->lab_Icon->setPixmap(m_currentIcon.pixmap(50,50));
    }
}

void widget::on_listWidget_itemClicked(QListWidgetItem *item)
{
    // 获取点击的 QListWidgetItem 中存储的节点信息
    QVariant variant = item->data(Qt::UserRole);
    if (variant.canConvert<ItemInfo>()) {
        ItemInfo info = variant.value<ItemInfo>();

        // 显示节点的 QSize 信息
        QString sizeInfo = QString("Size: %1 x %2").arg(info.size.width()).arg(info.size.height());
        ui->lab_Status->setText("Item Size"+ sizeInfo);

        ui->lab_Icon->setPixmap(info.icon.pixmap(50,50));
    }
}

