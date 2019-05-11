#include <boost/date_time/gregorian/gregorian.hpp>

namespace meetup {
    class scheduler {
    public:
        scheduler(boost::gregorian::date::month_type m, boost::gregorian::date::year_type y) : month(m), year(y) {};
        
        boost::gregorian::date monteenth() const
        {
            return boost::gregorian::first_day_of_the_week_after(boost::date_time::weekdays::Monday).get_date({year, month, 12});
        }
        
        boost::gregorian::date tuesteenth() const
        {
            return boost::gregorian::first_day_of_the_week_after(boost::date_time::weekdays::Tuesday).get_date({year, month, 12});
        }
        
        boost::gregorian::date wednesteenth() const
        {
            return boost::gregorian::first_day_of_the_week_after(boost::date_time::weekdays::Wednesday).get_date({year, month, 12});
        }
        
        boost::gregorian::date thursteenth() const
        {
            return boost::gregorian::first_day_of_the_week_after(boost::date_time::weekdays::Thursday).get_date({year, month, 12});
        }
        
        boost::gregorian::date friteenth() const
        {
            return boost::gregorian::first_day_of_the_week_after(boost::date_time::weekdays::Friday).get_date({year, month, 12});
        }
        
        boost::gregorian::date saturteenth() const
        {
            return boost::gregorian::first_day_of_the_week_after(boost::date_time::weekdays::Saturday).get_date({year, month, 12});
        }
        
        boost::gregorian::date sunteenth() const
        {
            return boost::gregorian::first_day_of_the_week_after(boost::date_time::weekdays::Sunday).get_date({year, month, 12});
        }
        
        boost::gregorian::date first_monday() const
        {
            return first_weekday(boost::date_time::weekdays::Monday);
        }
        
        boost::gregorian::date first_tuesday() const
        {
            return first_weekday(boost::date_time::weekdays::Tuesday);
        }
        
        boost::gregorian::date first_wednesday() const
        {
            return first_weekday(boost::date_time::weekdays::Wednesday);
        }
        
        boost::gregorian::date first_thursday() const
        {
            return first_weekday(boost::date_time::weekdays::Thursday);
        }
        
        boost::gregorian::date first_friday() const
        {
            return first_weekday(boost::date_time::weekdays::Friday);
        }
        
        boost::gregorian::date first_saturday() const
        {
            return first_weekday(boost::date_time::weekdays::Saturday);
        }
        
        boost::gregorian::date first_sunday() const
        {
            return first_weekday(boost::date_time::weekdays::Sunday);
        }
        
        boost::gregorian::date second_monday() const
        {
            return nth_weekday(boost::date_time::weekdays::Monday, boost::gregorian::nth_day_of_the_week_in_month::week_num::second);
        }
        
        boost::gregorian::date second_tuesday() const
        {
            return nth_weekday(boost::date_time::weekdays::Tuesday, boost::gregorian::nth_day_of_the_week_in_month::week_num::second);
        }
        
        boost::gregorian::date second_wednesday() const
        {
            return nth_weekday(boost::date_time::weekdays::Wednesday, boost::gregorian::nth_day_of_the_week_in_month::week_num::second);
        }
        
        boost::gregorian::date second_thursday() const
        {
            return nth_weekday(boost::date_time::weekdays::Thursday, boost::gregorian::nth_day_of_the_week_in_month::week_num::second);
        }
        
        boost::gregorian::date second_friday() const
        {
            return nth_weekday(boost::date_time::weekdays::Friday, boost::gregorian::nth_day_of_the_week_in_month::week_num::second);
        }
        
        boost::gregorian::date second_saturday() const
        {
            return nth_weekday(boost::date_time::weekdays::Saturday, boost::gregorian::nth_day_of_the_week_in_month::week_num::second);
        }
        
        boost::gregorian::date second_sunday() const
        {
            return nth_weekday(boost::date_time::weekdays::Sunday, boost::gregorian::nth_day_of_the_week_in_month::week_num::second);
        }
        
        boost::gregorian::date third_monday() const
        {
            return third_weekday(boost::date_time::weekdays::Monday);
        }
        
        boost::gregorian::date third_tuesday() const
        {
            return third_weekday(boost::date_time::weekdays::Tuesday);
        }
        
        boost::gregorian::date third_wednesday() const
        {
            return third_weekday(boost::date_time::weekdays::Wednesday);
        }
        
        boost::gregorian::date third_thursday() const
        {
            return third_weekday(boost::date_time::weekdays::Thursday);
        }
        
        boost::gregorian::date third_friday() const
        {
            return third_weekday(boost::date_time::weekdays::Friday);
        }
        
        boost::gregorian::date third_saturday() const
        {
            return third_weekday(boost::date_time::weekdays::Saturday);
        }
        
        boost::gregorian::date third_sunday() const
        {
            return third_weekday(boost::date_time::weekdays::Sunday);
        }
        
        boost::gregorian::date fourth_monday() const
        {
            return fourth_weekday(boost::date_time::weekdays::Monday);
        }
        
        boost::gregorian::date fourth_tuesday() const
        {
            return fourth_weekday(boost::date_time::weekdays::Tuesday);
        }
        
        boost::gregorian::date fourth_wednesday() const
        {
            return fourth_weekday(boost::date_time::weekdays::Wednesday);
        }
        
        boost::gregorian::date fourth_thursday() const
        {
            return fourth_weekday(boost::date_time::weekdays::Thursday);
        }
        
        boost::gregorian::date fourth_friday() const
        {
            return fourth_weekday(boost::date_time::weekdays::Friday);
        }
        
        boost::gregorian::date fourth_saturday() const
        {
            return fourth_weekday(boost::date_time::weekdays::Saturday);
        }
        
        boost::gregorian::date fourth_sunday() const
        {
            return fourth_weekday(boost::date_time::weekdays::Sunday);
        }
        
        boost::gregorian::date last_monday() const
        {
            return last_weekday(boost::date_time::weekdays::Monday);
        }
        
        boost::gregorian::date last_tuesday() const
        {
            return last_weekday(boost::date_time::weekdays::Tuesday);
        }
        
        boost::gregorian::date last_wednesday() const
        {
            return last_weekday(boost::date_time::weekdays::Wednesday);
        }
        
        boost::gregorian::date last_thursday() const
        {
            return last_weekday(boost::date_time::weekdays::Thursday);
        }
        
        boost::gregorian::date last_friday() const
        {
            return last_weekday(boost::date_time::weekdays::Friday);
        }
        
        boost::gregorian::date last_saturday() const
        {
            return last_weekday(boost::date_time::weekdays::Saturday);
        }
        
        boost::gregorian::date last_sunday() const
        {
            return last_weekday(boost::date_time::weekdays::Sunday);
        }
        
    private:
        const boost::gregorian::date::month_type month;
        const boost::gregorian::date::year_type year;
        
        boost::gregorian::date first_weekday(boost::date_time::weekdays day) const
        {
            return boost::gregorian::first_day_of_the_week_in_month(day, month).get_date(year);
        }
        
        boost::gregorian::date nth_weekday(boost::date_time::weekdays day, boost::gregorian::nth_day_of_the_week_in_month::week_num wn) const
        {
            return boost::gregorian::nth_day_of_the_week_in_month(wn, day, month).get_date(year);
        }
        
        boost::gregorian::date third_weekday(boost::date_time::weekdays day, boost::gregorian::nth_day_of_the_week_in_month::week_num wn = boost::gregorian::nth_day_of_the_week_in_month::week_num::third) const
        {
            return boost::gregorian::nth_day_of_the_week_in_month(wn, day, month).get_date(year);
        }
        
        boost::gregorian::date fourth_weekday(boost::date_time::weekdays day, boost::gregorian::nth_day_of_the_week_in_month::week_num wn = boost::gregorian::nth_day_of_the_week_in_month::week_num::fourth) const
        {
            return boost::gregorian::nth_day_of_the_week_in_month(wn, day, month).get_date(year);
        }
        
        boost::gregorian::date last_weekday(boost::date_time::weekdays day, boost::gregorian::nth_day_of_the_week_in_month::week_num wn = boost::gregorian::nth_day_of_the_week_in_month::week_num::fifth) const
        {
            return boost::gregorian::nth_day_of_the_week_in_month(wn, day, month).get_date(year);
        }
        
    };
}