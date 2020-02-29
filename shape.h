#ifndef _SHAPE
#define _SHAPE
class CShape{
	protected:
		float x,y;
	public:
		CShape(float a,float b) : x(a),y(b){
		}	
		void Move(float, float);
		void Print();
};
class CCircle : public CShape{
	private:
		float Radius;
	public:
		CCircle(float a,float b,float r) : CShape(a,b),Radius(r){
		}	
		void Print();
};

class CRect : public CShape{
	private:
		float Garo,Sero;
	public:
		CRect(float a,float b, float ga, float se) : CShape(a,b), Garo(ga), Sero(se){
		}	
		void Print();
};
#endif
