using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

/// <summary>
/// Class created to house GetNavMeshSize because I realized I needed to call it in multiple locations
/// </summary>
public static class NavMeshUtils
{
    
    /// <summary>
    /// Returns the size of the current nav mesh by sending out the positions of the corner vertices
    /// </summary>
    /// <param name="minPosition"></param>
    /// <param name="maxPosition"></param>
    /// <returns></returns>
    public static void GetNavMeshSize(out Vector3 minPosition, out Vector3 maxPosition)
    {
        //This was the best way I could find to get the size of a square NavMesh. So fucking stupid
        Vector3[] navMeshVertexes = NavMesh.CalculateTriangulation().vertices;
        int vertexCount = navMeshVertexes.Length;
        
        //Just assigning the variables temporarily so visual studio doesn't shit itself in confusion
        minPosition= Vector3.zero;
        maxPosition= Vector3.zero;
        for (int i = 0; i < vertexCount; i++)
        {
            if (navMeshVertexes[i].x > maxPosition.x)
                maxPosition.x = navMeshVertexes[i].x;
            else if (navMeshVertexes[i].x < minPosition.x)
                minPosition.x = navMeshVertexes[i].x;

            if (navMeshVertexes[i].y > maxPosition.y)
                maxPosition.y = navMeshVertexes[i].y;
            else if (navMeshVertexes[i].y < minPosition.y)
                minPosition.y = navMeshVertexes[i].y;

            if (navMeshVertexes[i].z > maxPosition.z)
                maxPosition.z = navMeshVertexes[i].z;
            else if (navMeshVertexes[i].z < minPosition.z)
                minPosition.z = navMeshVertexes[i].z;
        }

        //return true;
    }
}
