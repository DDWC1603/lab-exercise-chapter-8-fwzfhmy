#include <iostream>
using namespace std;

class Log
{
	private:
		int m_LogLevel=LogLevelInfo;


	public:
    const int LogLevelError = 0;
	  const int LogLevelWarning = 1;
	  const int LogLevelInfo = 2;

    void SetLevel (int Level)
		{
			m_LogLevel = Level;
		}
		void Error (const char message)
		{
			if (m_LogLevel>=LogLevelError)
			cout<< "[ERROR]: "<<message<<endl;
		}
		void Warn (const char* message)
		{
			if (m_LogLevel>=LogLevelWarning)
			cout<<"[WARNING]:"<<message<<endl;
		}
		void Info (const char* message)
		{
			if (m_LogLevel>=LogLevelInfo)
			cout<< "[INFO}: "<<message<<endl;
		}
};


int main()

{

	Log oLog;
	oLog.SetLevel(oLog.LogLevelInfo);
	oLog.Info("Hello!!!");
	

}
