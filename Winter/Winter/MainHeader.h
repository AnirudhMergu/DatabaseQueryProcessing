struct Globals
{
	int MarksSize = 10;
	int InfoSize = 10;
	int MarksCurrent = -1;
	int InfoCurrent = -1;
	bool isInfoAdded = false;
	bool isMarksAdded = false;
	bool isAvgComputed = false;
	bool isCGPAComputed = false;
} globals;

struct Marks
{
	int RollNo;
	char Name[100];
	int M1;
	int M2;
	int M3;
	int M4;
	float avg;
	float CGPA;
} **marks;

struct Info
{
	int RollNo;
	char phone[15];
	char Address[300];
	char City[50];
	char pincode[6];
} **info;

char *toLower(char *string);
void M1Operations(char *operation, char *criteria);
void M2Operations(char *operation, char *criteria);
void M3Operations(char *operation, char *criteria);
void M4Operations(char *operation, char *criteria);
void AvgOperations(char *operation, char *criteria);
void CGPAOperations(char *operation, char *criteria);
void PhoneOperations(char *operation, char*criteria);
void AddressOperations(char *operation, char*criteria);
void CityOperations(char *operation, char*criteria);
void PinCodeOperations(char *operation, char*criteria);
void failure(char* pattern, int* f);
int kmp(char* t, char* p);
int* init_array(int size);
int kmp(char* t, char* p);
void failure(char* p, int* f);
void NameOperations(char *operation, char *criteria);
bool startsWith(const char *pre, const char *str);
void Query();
void AddStudentMarks(char *line, int index);
int GetRollNo(char *line);
void AddInfo(char *line, int index);
void ComputeAverage();
int getCGPA(int marks);
void ComputeCGPA();
void ShowMarks();
void ShowInfo();
void SaveMarks();
void SaveAddress();
void ShowJoined();
void resizeMarksArray();
void resizeInfoArray();
void loadMarks();
void loadInfo();