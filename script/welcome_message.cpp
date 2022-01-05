#include <gazebo/gazebo.hh>

namespace gazebo
{
  class WorldPluginMyRobot : public WorldPlugin
  {
    public: WorldPluginMyRobot() : WorldPlugin()
    {
      printf("Welcome to Michelle's World!\n");
    }

    //Mandatory and should always be included!
    public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
    {
    }
  };

  GZ_REGISTER_WORLD_PLUGIN(WorldPluginMyRobot)
}
