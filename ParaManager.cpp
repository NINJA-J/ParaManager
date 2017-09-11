#include "ParaManager.h"

ParaManager::ParaManager():ArdUnixBase("val"){
	
}
ParaManager::ParaManager( String lable ):ArdUnixBase(lable){

}
		
char ParaManager::getType( String name );
bool ParaManager::exist( String name );

bool ParaManager::addVal( String name, char type);
bool ParaManager::dltVal( String name );
		
bool ParaManager::setVal( String name, String  val );
bool ParaManager::setVal( String name, double  val );
bool ParaManager::setVal( String name, float   val );
bool ParaManager::setVal( String name, int     val );
bool ParaManager::setVal( String name, char    val );
bool ParaManager::setVal( String name, String  val, char type );
		
bool ParaManager::getVal( String name, String& val );
bool ParaManager::getVal( String name, double& val );
bool ParaManager::getVal( String name, float&  val );
bool ParaManager::getVal( String name, int&    val );
bool ParaManager::getVal( String name, char&   val );
bool ParaManager::getVal( String name, String& val, char type );
