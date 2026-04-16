class A{
public:
	virtual int connect()=0;
	virtual ~A() = default;
};

int Send(A& a);