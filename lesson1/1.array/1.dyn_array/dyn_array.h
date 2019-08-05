#ifndef Array_hpp
#define Array_hpp
 
template <class T>
class Array{
private:
  T *base;    //�����׵�ַ
  int length;   //������Ԫ��
  int size;    //�����С,��������Ԫ�صĴ�СΪ��λ
public:
  //��ʼ�����飬�����ڴ�
  bool init();
  //����ڴ��Ƿ��ã������þ�����
  bool ensureCapcity();
  //���Ԫ�ص�����β
  bool add(T item);
  //����Ԫ�ص�����ľ���λ�ã�λ�ô�1��ʼ
  bool insert(int index,T item);
  //ɾ��ָ��λ�õ�Ԫ�ز����أ�λ�ô�1��ʼ
  T del(int index);
  //����ָ��λ�õ�Ԫ��
  T objectAt(int index);
  //��ӡ��������Ԫ��
  void display();
};
 
#endif /* Array_hpp */