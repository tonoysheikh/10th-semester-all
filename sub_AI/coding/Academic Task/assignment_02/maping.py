def aStarSearch(start, goal): 
    # hear start will be cantonment, since its my home & UAP as goal
    o_fringe = set(start) 
    # it will have the queue for not visited plus child nodes, but for starting it will have Cantonment
    c_fringe = set() 
    # this will contain the visited nodes
    g_pathCost = {} 
    # dictionary for storing node wise path costs
    root_node = {} 
    # dictionary for storing parent nodes info so that multiple child can be visited
    g_pathCost[start] = 0 
    # now for start node the path cost will be obviously zero since the distance from start to current node is zero
    root_node[start] = start 
    # and in the starting state the root node will be the start node that is cantonment

    while len(o_fringe) > 0:
        temp = 0
        for current_node in o_fringe:
            if temp == 0 or g_pathCost[current_node] + heuristic(current_node) < g_pathCost[temp] + heuristic(temp):
                temp = current_node 
                # if child node available then it finds the node name n path cost
        if temp == goal or directions[temp] == 0:
            pass
        else:
            for (child_node, node_path_cost) in get_child(temp):
                if child_node not in o_fringe and child_node not in c_fringe:
                    o_fringe.add(child_node)
                    root_node[child_node] = temp
                    g_pathCost[child_node] = g_pathCost[temp] + node_path_cost
                else:
                    if g_pathCost[child_node] > g_pathCost[temp] + node_path_cost:
                        g_pathCost[child_node] = g_pathCost[temp] + node_path_cost
                        root_node[child_node] = temp
                    if child_node in c_fringe:
                        c_fringe.remove(child_node)
                        o_fringe.add(child_node)

        if temp == goal:
            path_list = []
            routes_list = []
            routes = {
                'C': "Cantonment (Home)",  
                'B': "Banani",  
                'M': "Mohakhali",  
                'BS':"Bijoy sarani",  
                'S': "Shukrabad",  
                'K': "Kallyanpur",  
                'SA':"Shah Ali",  
                'MI':"Mirpur10",  
                'WS':"West Shewrapara",  
                'U': "UAP"
            }
            while root_node[temp] != temp:
                path_list.append(temp)
                routes_list.append(routes[temp])
                temp = root_node[temp]
            path_list.append(start)
            routes_list.append(routes[start])
            path_list.reverse()
            routes_list.reverse()
            print('The most optimal path : {}'.format(str(routes_list).replace(",", ">>>")))
            return path_list
        
        o_fringe.remove(temp)
        c_fringe.add(temp)
    
    print('No such route.')
    return 0

def get_child(current_node):  
    if current_node in directions: 
        # finding child from direction dictionary
        return directions[current_node]
    else:
        return 0

def heuristic(n): 
    # dictionary for storing heuristic distance
    Heuristic_distance = {
        'C': 2,  
        'B': 1,  
        'M': 2,  
        'BS': 1,  
        'S': 5,  
        'K': 5,  
        'SA': 6,  
        'MI': 4,  
        'WS': 3,  
        'U': 0
    }
    return Heuristic_distance[n]

directions = { 
    # tuple for storing connected/child nodes and their path cost
    'C': [('WS', 5), ('B', 2), ('MI', 3)],  
    'B': [('M', 1)],  
    'M': [('BS', 2)],  
    'BS': [('U', 4)],  
    'S': [('U', 5)],  
    'K': [('S', 3)],  
    'SA': [('K', 2)],  
    'MI': [('WS', 3)],  
    'WS': [('BS', 2), ('SA', 4)],  
    'U': 0
}

path = aStarSearch('C', 'U')
path_cost = 0.0

for i in range(len(path) - 1):
    for key, value in directions[path[i]]:
        if key == path[i + 1]:
            path_cost += value
            break

print("Path cost = %d km." % path_cost)
