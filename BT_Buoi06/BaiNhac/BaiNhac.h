class KyHieu
{
protected:
    float TruongDo;

public:
    virtual void Nhap();
    virtual bool LaDauLangDen();
    virtual char LayCaoDo() = 0;
};

class NotNhac : public KyHieu
{
private:
    int CaoDo;

public:
    void Nhap();
    char LayCaoDo();
};

class DauLang
{
public:
    bool LaDauLangDen();
    char LayCaoDo();
}