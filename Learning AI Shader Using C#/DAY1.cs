using UnityEngine;
using UnityEngine.Rendering;

public class KeywordExample : MonoBehaviour
{
    public Material material;

    void Start()
    {
        CheckShaderKeywordState();
    }

    void CheckShaderKeywordState()
    {
        // Get the instance of the Shader class that the material uses
        var shader = material.shader;

        // Get all the local keywords that affect the Shader
        var keywordSpace = shader.keywordSpace;

        // Iterate over the local keywords
        foreach (var localKeyword in keywordSpace.keywords)
        {
            // If the local keyword is overridable (i.e., it was declared with a global scope),
            // and a global keyword with the same name exists and is enabled,
            // then Unity uses the global keyword state
            if (localKeyword.isOverridable && Shader.IsKeywordEnabled(localKeyword.name))
            {
                Debug.Log("Local keyword with name of " + localKeyword.name + " is overridden by a global keyword, and is enabled");
            }
            // Otherwise, Unity uses the local keyword state
            else
            {
                var state = material.IsKeywordEnabled(localKeyword) ? "enabled" : "disabled";
                Debug.Log("Local keyword with name of " + localKeyword.name + " is " + state);
            }            
        }
    }
}



// Material Inspector

Shader "Custom/ApplyEffectIfKeywordIsOn"
{
    Properties
    {
        // Display a toggle in the Material's Inspector window
            [Toggle] _Keyword ("Keyword", Float) = 0.0
    }

    SubShader
    {
        Pass
        {
            #pragma shader_feature _Keyword

            fixed4 frag(v2f i) : SV_Target
            {
                    #if _Keyword
                        // If _Keyword is on at build time, Unity creates a shader variant that uses the following code
                        ApplyEffect();
                    #endif
            
            // rest of shader code...
            }
        }
    }
}


shader

//still on Day 1
// Example C# code

class Object {
    int id;
    void MyMethod() {
        id++;
    }
}

class Child : Object {
    int specialValue;
    Child(int value) {
        id = 0;
        specialValue = value;
    }
}

Child child = new Child(8);
child.MyMethod();

// Example HLSL code

struct Child {
    int id;
    int specialValue;
}

void MyMethod(inout Child child) {
    child.id++;
}

Child child;
child.id = 0;
child.specialValue = 8;
MyMethod(child);

// Day 2 Loading.