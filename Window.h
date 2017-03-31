class Window{
	private:
		int open;
		unsigned int time;
		unsigned int idle;
		unsigned int record;
		
	public:
		Window();
		~Window();
		
		int getTime();
		int isOpen();
		void runWindow();
		void acceptStudent(int rec);
};
