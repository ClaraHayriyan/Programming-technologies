class Singleton {
public:
    static Singleton& getInstance() {
        static Singleton instance;
        return instance;
    }
    Singleton(const Singleton&) =delete;
    Singleton& operator=(const Singleton&) =delete;

    static int count;
private:
    Singleton() { ++count; }
    ~Singleton() =default;
};

int Singleton::count = 0;