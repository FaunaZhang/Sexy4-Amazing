#include <string>
using namespace std;
class Item{
<<<<<<< HEAD
	string  no;			//  商品编号
	string name;		//  商品名
	float price;		//  单价
	int count;			//  总数
	float discount;		//  折扣
	bool promotion;		//	促销
	float vipdiscount;	//	会员折扣
public:
	Item( string No, string Name, float Price, int Count, float Discount, bool Promotion, float Vipdiscount );
								//	构造函数用于创建对象、初始化属性
	string getNo( );			//  获得商品编号
    string getName( );			//  获得商品名
    float &getPrice( );			//  获得单价
    int &getCount( );			//  获得总数
    float &getDiscount( );		//  获得折扣
	bool &getPromotion( );		//	获得促销
	float &getVipdiscount( );	//	获得会员折扣
};
=======
	string  no;			//  鍟嗗搧缂栧彿
	string name;		//  鍟嗗搧鍚�
	float price;		//  鍗曚环
	int count;			//  鎬绘暟
	float discount;		//  鎶樻墸
	bool promotion;		//	淇冮攢
	float vipdiscount;	//	浼氬憳鎶樻墸
public:
	Item( string No, string Name, float Price, int Count, float Discount, bool Promotion, float Vipdiscount );
								//	鏋勯�犲嚱鏁扮敤浜庡垱寤哄璞°�佸垵濮嬪寲灞炴��
	string getNo( );			//  鑾峰緱鍟嗗搧缂栧彿
    string getName( );			//  鑾峰緱鍟嗗搧鍚�
    float &getPrice( );			//  鑾峰緱鍗曚环
    int &getCount( );			//  鑾峰緱鎬绘暟
    float &getDiscount( );		//  鑾峰緱鎶樻墸
	bool &getPromotion( );		//	鑾峰緱淇冮攢
	float &getVipdiscount( );	//	鑾峰緱浼氬憳鎶樻墸
};
>>>>>>> refs/remotes/origin/master
