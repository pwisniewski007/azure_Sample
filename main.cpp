
#include "AzureStorage.h"

string AzureStorage::m_AzureAccountName = "pwisniewski";
string AzureStorage::m_AzureAccountKey = "BNsUlJBDUl/1e8l/mqT23yA0EVduQjDDstIZJ5KLhOxsAy0Zmphd1/FwDxC4VjPT1vKbwLfm+MpEuwCCaXRk+w==";
string AzureStorage::m_AzureContainer = "pwisniewskiblobcontainer5";
string AzureStorage::m_AzureTable = "MySampleTable793";
int main(int argc, char** argv)
{
      if(argc == 2 || argc==3 )
    {  

        AzureStorage azureStorage(argc,argv);
        azureStorage.play();
       
        
    }
  
   
}