class KyHieu
{
protected:
    float TruongDo;

public:
    virtual void Nhap();
    virtual bool LaDauLangDen();
    virtual int LayCaoDo() = 0;
};

class NotNhac : public KyHieu
{
private:
    int CaoDo;

public:
    void Nhap();
    int LayCaoDo();
};

class DauLang
{
public:
    bool LaDauLangDen();
    int LayCaoDo();
}