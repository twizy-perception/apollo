cd /apollo

dir_name=/apollo/modules/map/data/mossen
/apollo/bazel-bin/modules/map/tools/sim_map_generator --map_dir=${dir_name} --output_dir=${dir_name}

./scripts/generate_routing_topo_graph.sh --map_dir=${dir_name}