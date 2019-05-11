namespace space_age {
    static const long SECONDS_PER_YEAR = 31557600;
    
    static const double MERCURY_YEARS_PER_EARTH_YEARS = 0.2408467;
    
    static const double VENUS_YEARS_PER_EARTH_YEARS = 0.61519726;
    
    static const double MARS_YEARS_PER_EARTH_YEARS = 1.8808158;
    
    static const double JUPITER_YEARS_PER_EARTH_YEARS = 11.862615;
    
    static const double SATURN_YEARS_PER_EARTH_YEARS = 29.447498;
    
    static const double URANUS_YEARS_PER_EARTH_YEARS = 84.016846;
    
    static const double NEPTUNE_YEARS_PER_EARTH_YEARS = 164.79132;
    
    class space_age {
    public:
        space_age(unsigned long long s) : secs(s) {};
        
        unsigned long long seconds() const { return secs; }
        
        double on_earth() const { return static_cast<double>(secs) / static_cast<double>(SECONDS_PER_YEAR); }
        
        double on_mercury() const { return on_earth() / MERCURY_YEARS_PER_EARTH_YEARS; }
        
        double on_venus() const { return on_earth() / VENUS_YEARS_PER_EARTH_YEARS; }
        
        double on_mars() const { return on_earth() / MARS_YEARS_PER_EARTH_YEARS; }
        
        double on_jupiter() const { return on_earth() / JUPITER_YEARS_PER_EARTH_YEARS; }
        
        double on_saturn() const { return on_earth() / SATURN_YEARS_PER_EARTH_YEARS; }
        
        double on_uranus() const { return on_earth() / URANUS_YEARS_PER_EARTH_YEARS; }
        
        double on_neptune() const { return on_earth() / NEPTUNE_YEARS_PER_EARTH_YEARS; }
        
    private:
        unsigned long long secs;
    };
}