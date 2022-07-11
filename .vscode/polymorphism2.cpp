class Basic
{
public:
 virtual void start(){
    cout<<"BasicCar started";}
};
class AdvanceCar: public BasicCar
{
public:
 void start(){cout<<"AdvanceCar Started";}
};
int main()
{
 BasicCar *p=new AdvanceCar();
 p->start();
}