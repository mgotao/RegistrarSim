class Window{
	private:
		int open;
		unsigned int time;
		
	public:
		Window();
		~Window();
		
		int getTime();
		int isOpen();
		void runWindow();
		void acceptStudent(int rec);
};
