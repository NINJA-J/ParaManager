#ifndef PARA_MANAGER_H
#define PARA_MANAGER_H

#include <ArdUnix.h>

class ParaManager:public ArdUnixBase{
	private:
		union ParaValue{
			String sVal;
			double dVal;
			float  fVal;
			int    iVal;
			char   cVal;
		};
		struct ParaSplict{
			char type;
			union ParaValue value;
		};
		struct ParaBlock{
			String name;
			struct ParaSplict para;
			struct ParaBlock* next;
		};
		struct ParaBlock* head, tail;
	public:
		ParaManager();
		ParaManager( String lable );
		
		char getType( String name );
		bool exist( String name );
		
		bool addVal( String name, char type);
		bool dltVal( String name );
		
		bool setVal( String name, String  val );
		bool setVal( String name, double  val );
		bool setVal( String name, float   val );
		bool setVal( String name, int     val );
		bool setVal( String name, char    val );
		bool setVal( String name, String  val, char type );
		
		bool getVal( String name, String& val );
		bool getVal( String name, double& val );
		bool getVal( String name, float&  val );
		bool getVal( String name, int&    val );
		bool getVal( String name, char&   val );
		bool getVal( String name, String& val, char type );
};

#endif
