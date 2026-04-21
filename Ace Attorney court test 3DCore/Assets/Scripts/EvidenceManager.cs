using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// Class used to store all the evidence and profiles used in the game
/// </summary>
public static class EvidenceManager
{
    public static List<Evidence> evidenceList = new List<Evidence>();

    public static List<Profile> profileList = new List<Profile>();
    public class Evidence//Template for all evidence
    {
        public string name;
        public string description;
        public Sprite profilePicture;
        public List<Sprite> inspected;//for images which are sometimes 2 different ones. Essentially easier to do.
    }
    public class Profile//Template for all evidence
    {
        public string name;
        public string description;
        public Sprite profilePicture;
    }
    public static void AddEvidence(string EvidenceName, string EvidenceDescription, Sprite EvidencePicture, List<Sprite> EvidenceInspected)
    {
        Evidence e = new Evidence();
        e.name = EvidenceName;
        e.description = EvidenceDescription;
        e.profilePicture = EvidencePicture;
        e.inspected = EvidenceInspected;
        evidenceList.Add(e);
    }
    public static void AddProfile(string CharacterName, string CharacterDescription, Sprite Mugshot)
    {
        Profile p = new Profile();
        p.name = CharacterName;
        p.description = CharacterDescription;
        p.profilePicture = Mugshot;
        profileList.Add(p);
    }
}
