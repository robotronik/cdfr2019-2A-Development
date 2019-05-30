
//pour compute order
enum Tendency{
  STABLE,
  SPEED_UP,
  SLOW_DOWN
};

//pour definir le profil des ordres en trapeze
typedef struct {
  double max;
  double transition;//longueur zone de transition pour accelerer/ralentir
  double steep;//pente, a recalculer en cas de changement
  double finalGoal;//destination du robot
} SPEED_PROFILE;

int setProfile(double max, double endAccelerationGoal, double finalGoal, SPEED_PROFILE* sp);

/** Renvoi la vitesse attendu par rapport au profil de vitesse. Return 0 si en dehors du profil.
      dPos: position par rapport au debut de l'ordre (dReste ?)
      sp: def du profil de vitesse utilise
*/
double speedFunction(double dPos, SPEED_PROFILE* sp);

/**Calcul le coef param du correcteur pour realiser le profil de vitesse. return -1 si erreur
    return: ordre pour correcteur
      speedGoal: objectif a obtenir depuis speedFunction
      Tendency: si accelere, ralenti ou stable
*/
double computeOrder(double speedGoal, enum Tendency t);
