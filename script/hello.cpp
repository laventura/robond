#include <gazebo/gazebo.hh>

namespace gazebo
{
    class WorldPluginMyRobot : public WorldPlugin
    {
        public: WorldPluginMyRobot() : WorldPlugin() {
            printf(">>>>>> .........................\n");
            printf("Hello!! Welcome to Atul's world!\n");
            printf(">>>>>> .........................\n");
        }
        
        public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf) {
            // ignore
        }
    };  // class
    
    GZ_REGISTER_WORLD_PLUGIN(WorldPluginMyRobot)
    
}   // namespace
