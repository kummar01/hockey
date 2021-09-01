/*  Hockey.h  the header file for the class Hockey
//
// Hockey class keeping track of a player's goals, assists,
penalties and penalty minutes */
class Hockey
{
      private:
        int 
		goals,            // number of goals
            assists,          // number of assists
            penalties,        // number of penalties
            penalty_minutes;  // total of penalty minutes
      public:
         void initialize (); 
         void tripping ();
         void fighting ();
         void score_goal ();
         void assist_goal ();
         void print ();
};

